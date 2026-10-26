/*
 * FUN_0056c8c0 at 0056c8c0
 * undefined __register FUN_0056c8c0(int * param_1)
 * Address ranges: 0056c8c0-0056c910
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x56c01c slot published:btnDetailsClick for TfrmException2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x56c01c slot
   published:btnDetailsClick for TfrmException2. Original bytes unchanged; names and types still
   inferred. */

void FUN_0056c8c0(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  FUN_00431f98(param_1,param_1[0xbf]);
  FUN_0043262c((int *)param_1[0xba],CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  FUN_0043262c((int *)param_1[0xb9],CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX_00);
  FUN_0043262c((int *)param_1[0xbe],0,extraout_ECX_01);
  return;
}

