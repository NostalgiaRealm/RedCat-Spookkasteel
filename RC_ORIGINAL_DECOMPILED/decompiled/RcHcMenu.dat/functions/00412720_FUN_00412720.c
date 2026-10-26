/*
 * FUN_00412720 at 00412720
 * undefined __register FUN_00412720(int * param_1, char param_2)
 * Address ranges: 00412720-00412781
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4107e0 slot -1 for TThreadList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4107e0 slot -1 for
   TThreadList. Original bytes unchanged; names and types still inferred. */

void FUN_00412720(int *param_1,char param_2)

{
  int *piVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  piVar1 = FUN_00403434(param_1,param_2);
  FUN_00412824((int)piVar1);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  FUN_00403094((int *)piVar1[1]);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  *in_FS_OFFSET = uStackY_18;
  FUN_00412888((int)piVar1);
  uStackY_18 = 0x412781;
  DeleteCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
  return;
}

