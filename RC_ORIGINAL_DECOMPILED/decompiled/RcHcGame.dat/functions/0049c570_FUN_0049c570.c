/*
 * FUN_0049c570 at 0049c570
 * undefined FUN_0049c570(void)
 * Address ranges: 0049c570-0049c595
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0049c570(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_18 [24];
  
  puVar1 = (undefined4 *)FUN_0049bc00(local_18);
  puVar3 = (undefined4 *)(param_1 + 0x11c);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

