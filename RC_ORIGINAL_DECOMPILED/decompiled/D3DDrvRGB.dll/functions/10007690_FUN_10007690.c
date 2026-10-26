/*
 * FUN_10007690 at 10007690
 * undefined4 __stdcall FUN_10007690(void)
 * Address ranges: 10007690-100076f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007690(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 local_7c [31];
  
  puVar2 = &DAT_1001bd68;
  puVar5 = local_7c;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  bVar4 = 0;
  puVar3 = &DAT_100ec090;
  do {
    iVar1 = 1 << (bVar4 & 0x1f);
    iVar1 = FUN_10007720(puVar3,iVar1,iVar1,local_7c);
    if (iVar1 == 0) {
      FUN_10007700();
      return 0;
    }
    puVar3 = puVar3 + 0x10;
    bVar4 = bVar4 + 1;
  } while ((int)puVar3 < 0x100ec0f0);
  return 1;
}

