/*
 * FUN_10003ac0 at 10003ac0
 * undefined4 __stdcall FUN_10003ac0(void)
 * Address ranges: 10003ac0-10003b31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10003ac0(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  FUN_100020f0(s_____D3DMain_PickDevice_____100148ec);
  uVar1 = FUN_10002690(DAT_1002707c);
  iVar3 = 0;
  if (0 < DAT_1002a9f0) {
    puVar2 = &DAT_1002b290;
    do {
      if ((((puVar2[0x1c] != 0) && ((*puVar2 & uVar1) != 0)) &&
          ((*(byte *)((int)puVar2 + 5) & 4) != 0)) &&
         (((puVar2[-0x25] & 2) != 0 && ((puVar2[0x1f] != 0 || (DAT_1002a6c8 != 0)))))) {
        DAT_10030624 = iVar3;
        return 1;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x24e;
    } while (iVar3 < DAT_1002a9f0);
  }
  return 0;
}

