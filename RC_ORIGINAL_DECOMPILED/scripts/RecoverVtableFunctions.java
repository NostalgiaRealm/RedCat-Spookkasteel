// Define functions referenced by structurally validated original MSVC RTTI or Delphi VMT tables.
// @category RedCat.Inspection
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import java.nio.file.*;
import java.util.*;
public class RecoverVtableFunctions extends GhidraScript {
 public void run() throws Exception {
  int created=0,existing=0,failed=0;TreeSet<Address> seen=new TreeSet<>();
  for(String row:Files.readAllLines(Paths.get(getScriptArgs()[0]))) {
   if(row.startsWith("target\t")||row.isBlank())continue;
   String[] parts=row.split("\t");Address a=toAddr(Long.parseUnsignedLong(parts[0].substring(2),16));
   if(!seen.add(a))continue;
   if(getFunctionAt(a)!=null){existing++;continue;}
   Function containing=getFunctionContaining(a);
   if(containing!=null){println("SEED already inside function "+a+" in "+containing.getEntryPoint());existing++;continue;}
   if(getInstructionAt(a)==null){
    Instruction crossing=currentProgram.getListing().getInstructionContaining(a);
    if(crossing!=null){println("SEED clear crossing inferred instruction at "+a+": "+crossing.getMinAddress()+"-"+crossing.getMaxAddress()+" "+crossing);clearListing(crossing.getMinAddress(),crossing.getMaxAddress());}
    Data data=getDataContaining(a);
    if(data!=null){println("SEED clear inferred data at "+a+": "+data.getDataType().getName()+" "+data.getMinAddress()+"-"+data.getMaxAddress());clearListing(data.getMinAddress(),data.getMaxAddress());}
    disassemble(a);
   }
   Function f=createFunction(a,null);
   if(f==null){failed++;println("SEED FAILED "+a);continue;}
   f.setComment("Recovered original virtual function entry from validated native virtual-method table "+parts[1]+" slot "+parts[2]+" for "+parts[3]+". Original bytes unchanged; names and types still inferred.");created++;
  }
  FunctionIterator all=currentProgram.getFunctionManager().getFunctions(true);
  while(all.hasNext()){Function fn=all.next();String c=fn.getComment();if(c!=null&&c.contains("validated MSVC RTTI/vtable"))fn.setComment(c.replace("validated MSVC RTTI/vtable",currentProgram.getName().equals("RcHcMenu.dat")?"validated Delphi VMT":"validated MSVC RTTI/vtable"));}
  println("VTABLE RECOVERY created="+created+" existing="+existing+" failed="+failed);
  analyzeChanges(currentProgram);
 }
}
