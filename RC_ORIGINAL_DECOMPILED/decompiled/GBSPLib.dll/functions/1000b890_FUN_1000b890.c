/*
 * FUN_1000b890 at 1000b890
 * undefined FUN_1000b890(void)
 * Address ranges: 1000b890-1000b943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000b890(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_8;
  uint local_4;
  
  local_8 = (undefined4 *)0x0;
  local_4 = 0;
  iVar1 = FUN_10014700(0,&local_8,4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_1000b360(iVar1);
  if (iVar1 == 0) {
    FUN_10014990();
    return 0;
  }
  iVar1 = FUN_10014860(8);
  if (iVar1 == 0) {
    FUN_10014990();
    return 0;
  }
  DAT_1014e2f4 = (undefined4 *)FUN_10014310(local_4);
  puVar3 = local_8;
  puVar4 = DAT_1014e2f4;
  for (uVar2 = local_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = local_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  DAT_1014e2cc = local_4;
  FUN_10014990();
  return 1;
}

