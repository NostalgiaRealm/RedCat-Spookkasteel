/*
 * FUN_004f5924 at 004f5924
 * undefined __register FUN_004f5924(int * param_1, undefined4 * param_2)
 * Address ranges: 004f5924-004f5955
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f2904 slot 33 for TCustomTabControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f2904 slot 33 for
   TCustomTabControl. Original bytes unchanged; names and types still inferred. */

void FUN_004f5924(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 local_1c [4];
  
  bVar3 = 0;
  FUN_004f4f80(param_1,(int)local_1c);
  puVar2 = local_1c;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    param_2 = param_2 + (uint)bVar3 * -2 + 1;
  }
  FUN_00434bdc();
  return;
}

