/*
 * FUN_00441940 at 00441940
 * undefined __register FUN_00441940(int param_1, undefined4 param_2, undefined4 * param_3, undefined1 param_4)
 * Address ranges: 00441940-00441981
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fcd8 slot 13 for TMenuItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fcd8 slot 13 for
   TMenuItem. Original bytes unchanged; names and types still inferred. */

void FUN_00441940(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_14 [4];
  
  puVar2 = local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  if (*(short *)(param_1 + 0x8a) != 0) {
    (**(code **)(param_1 + 0x88))
              (*(undefined4 *)(param_1 + 0x8c),param_1,param_2,
               CONCAT31((int3)((uint)local_14 >> 8),param_4),local_14);
  }
  return;
}

