// Explicit x86 Davi UNOP dispatch destinations read from the unchanged original table.
// @category RedCat.Inspection
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import java.util.*;
public class RecoverDaviSwitch extends GhidraScript {
 public void run() throws Exception {
  if(!currentProgram.getExecutableSHA256().equals("e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5"))throw new IllegalArgumentException("Different original binary");
  Address start=toAddr(0x5fc480L), branch=toAddr(0x5fc4adL), table=toAddr(0x5fcb90L);
  Function f=getFunctionAt(start);ArrayList<Address> targets=new ArrayList<>();StringJoiner evidence=new StringJoiner(", ");
  for(int i=0;i<26;i++){
   Address target=toAddr(Integer.toUnsignedLong(currentProgram.getMemory().getInt(table.add(4L*i))));
   if(target.getOffset()<0x5fc4b4L||target.getOffset()>0x5fcb8fL)throw new IllegalArgumentException("Unexpected switch target "+target);
   disassemble(target);targets.add(target);currentProgram.getReferenceManager().addMemoryReference(branch,target,RefType.COMPUTED_JUMP,SourceType.USER_DEFINED,-1);evidence.add(i+" -> "+target);
  }
  AddressSet body=new AddressSet(f.getBody());
  for(Address target:targets){AddressSetView piece=CreateFunctionCmd.getFunctionBody(currentProgram,target,monitor);body.add(piece);}
  // Cases end through a shared SEH epilogue. Keep existing unrelated functions intact.
  FunctionIterator it=currentProgram.getFunctionManager().getFunctions(body,true);
  while(it.hasNext()){Function other=it.next();if(!other.equals(f))throw new IllegalStateException("Overlap with "+other.getEntryPoint());}
  f.setBody(body);new JumpTable(branch,targets,true,0).writeOverride(f);
  f.setComment("Recovered UNOP 26-case table from original bytes at 005fcb90. Analysis-only switch override; no binary bytes changed. "+evidence);
  DecompInterface d=new DecompInterface();d.openProgram(currentProgram);DecompileResults r=d.decompileFunction(f,180,monitor);println(r.getErrorMessage());if(r.getDecompiledFunction()!=null)println(r.getDecompiledFunction().getC());d.dispose();
 }
}
