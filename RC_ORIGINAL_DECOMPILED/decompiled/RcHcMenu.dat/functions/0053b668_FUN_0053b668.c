/*
 * FUN_0053b668 at 0053b668
 * undefined __register FUN_0053b668(int * param_1, int param_2)
 * Address ranges: 0053b668-0053b6d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 30 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 30 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0053b668(int *param_1,int param_2)

{
  int iVar1;
  
  FUN_0054728c(param_1,param_2);
  param_1[0x22] = 0;
  param_1[0x24] = -0x80000000;
  *(undefined1 *)(param_1 + 0x21) = 0;
  iVar1 = FUN_0049206c((int *)param_1[7]);
  param_1[0x20] = iVar1;
  param_1[0x23] = -0x80000000;
  *(undefined1 *)((int)param_1 + 0x85) = 0;
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}

