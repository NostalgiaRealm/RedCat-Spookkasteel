/*
 * FUN_00545910 at 00545910
 * undefined __register FUN_00545910(int * param_1, int param_2)
 * Address ranges: 00545910-00545967
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 30 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 30 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_00545910(int *param_1,int param_2)

{
  int iVar1;
  
  FUN_0054728c(param_1,param_2);
  (**(code **)(*param_1 + 0x10))(param_1,1);
  iVar1 = func_0x004ed588(&PTR_FUN_004ed50c,1,0,param_1[0xf]);
  param_1[0x21] = iVar1;
  param_1[0x20] = 100;
  FUN_005459f0(param_1);
  return;
}

