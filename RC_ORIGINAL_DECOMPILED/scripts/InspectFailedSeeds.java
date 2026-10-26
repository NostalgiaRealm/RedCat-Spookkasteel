// Explain validated virtual entries not admitted as functions by Ghidra.
// @category RedCat.Inspection
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import java.nio.file.*;
import java.util.*;
public class InspectFailedSeeds extends GhidraScript {
 public void run() throws Exception {
  TreeSet<Address> seen=new TreeSet<>();
  for(String row:Files.readAllLines(Paths.get(getScriptArgs()[0]))) {
   if(row.startsWith("target\t")||row.isBlank())continue;String[] p=row.split("\t");Address a=toAddr(Long.parseUnsignedLong(p[0].substring(2),16));
   if(!seen.add(a)||getFunctionAt(a)!=null)continue;
   CreateFunctionCmd cmd=new CreateFunctionCmd(a,false);boolean ok=cmd.applyTo(currentProgram,monitor);
   println("SEED "+a+" ok="+ok+" status="+cmd.getStatusMsg()+" instruction="+getInstructionAt(a)+" containing="+getFunctionContaining(a));
   AddressSetView body=CreateFunctionCmd.getFunctionBody(currentProgram,a,monitor);println("BODY "+body);
  }
 }
}
