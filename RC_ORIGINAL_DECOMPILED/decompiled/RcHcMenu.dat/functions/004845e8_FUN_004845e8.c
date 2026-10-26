/*
 * FUN_004845e8 at 004845e8
 * undefined __register FUN_004845e8(int * param_1, int param_2)
 * Address ranges: 004845e8-00484619
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 86 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 86 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_004845e8(int *param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_0047319c(param_1,param_2);
  FUN_0048458c((int)param_1,param_2);
  puVar1 = (undefined4 *)((uint)*(ushort *)(param_1 + 0x7b) + param_2);
  *(undefined1 *)(puVar1 + 1) = 2;
  *(undefined1 *)((int)puVar1 + 5) = 3;
  *puVar1 = 0xffffffff;
  return;
}

