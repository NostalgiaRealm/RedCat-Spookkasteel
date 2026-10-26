/*
 * FUN_10007840 at 10007840
 * undefined4 __stdcall FUN_10007840(void)
 * Address ranges: 10007840-100078a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007840(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 local_7c [31];
  
  puVar2 = &DAT_10027550;
  puVar5 = local_7c;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  bVar4 = 0;
  puVar3 = &DAT_101c3678;
  do {
    iVar1 = 1 << (bVar4 & 0x1f);
    iVar1 = FUN_100078d0(puVar3,iVar1,iVar1,local_7c,0,1);
    if (iVar1 == 0) {
      FUN_100078b0();
      return 0;
    }
    puVar3 = puVar3 + 0x14;
    bVar4 = bVar4 + 1;
  } while ((int)puVar3 < 0x101c36f0);
  return 1;
}

