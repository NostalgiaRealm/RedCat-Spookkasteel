/*
 * FUN_0043d730 at 0043d730
 * undefined4 __register FUN_0043d730(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 0043d730-0043d784
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42d8bc slot 17 for THintAction. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42d8bc slot 17 for
   THintAction. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0043d730(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  LRESULT LVar2;
  uint extraout_ECX;
  
  if ((((*(int **)(param_1 + 0x4c) == (int *)0x0) ||
       (uVar1 = FUN_00403270(*(int **)(param_1 + 0x4c),param_1,param_3), param_3 = extraout_ECX,
       (char)uVar1 == '\0')) &&
      (uVar1 = FUN_004524b8(*(int *)PTR_DAT_005723fc,param_1,param_3), (char)uVar1 == '\0')) &&
     (uVar1 = FUN_004198bc(param_1), (char)uVar1 == '\0')) {
    LVar2 = FUN_0042f948(0xb03f,0,param_1);
    uVar1 = 0;
    if (LVar2 != 1) {
      return 0;
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

