package haxegon;
	
import haxegon.util.*;
import openfl.display.*;
import openfl.geom.*;
import openfl.events.*;
import openfl.net.*;
import openfl.text.*;
import openfl.Assets;
import openfl.Lib;
import openfl.system.Capabilities;

class Debug {
	/** Clear the debug buffer */
	@:dox(hide)
	public static function clearlog() {
		debuglog = new Array<String>();
	}
	
	/** Outputs a string to the screen for testing. */
	public static function log(t:Dynamic) {
		debuglog.push(Convert.tostring(t));
		showtest = true;
		if (debuglog.length > 20) {
			debuglog.reverse();
			debuglog.pop();
			debuglog.reverse();
		}
	}
	
	/** Shows a single test string. */
	@:dox(hide)	
	public static function test(t:Dynamic) {
		debuglog[0] = Convert.tostring(t);
		showtest = true;
	}
	
	@:dox(hide)
	public static function showlog() {
		if (showtest) {
			for (k in 0 ... debuglog.length) {
				for (j in -1 ... 2) {
					for (i in -1 ... 2) {
						Text.display(2 + i, j + Std.int(2 + ((debuglog.length - 1 - k) * (Text.height(debuglog[k]) + 2))), debuglog[k], Gfx.rgb(0, 0, 0));
					}
				}
				Text.display(2, Std.int(2 + ((debuglog.length-1-k) * (Text.height(debuglog[k]) + 2))), debuglog[k], Gfx.rgb(255, 255, 255));
			}
		}
	}
	
	@:dox(hide)
	public static var showtest:Bool;


	@:dox(hide)
	public static var debuglog:Array<String> = new Array<String>();
}