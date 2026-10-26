/*
 * FUN_0047039c at 0047039c
 * undefined __register FUN_0047039c(int * param_1, int * param_2)
 * Address ranges: 0047039c-004703ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x46627c slot 0 for TParam. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x46627c slot 0 for TParam.
   Original bytes unchanged; names and types still inferred. */

void FUN_0047039c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00462a70);
  if ((char)uVar1 != '\0') {
    (**(code **)(*param_2 + 0xa4))(param_2,param_1 + 6);
    return;
  }
  FUN_00412b58(param_1,param_2);
  return;
}

