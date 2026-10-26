/*
 * FUN_004488c0 at 004488c0
 * undefined FUN_004488c0(void)
 * Address ranges: 004488c0-0044898a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00448909) */
/* WARNING: Removing unreachable block (ram,0x00448910) */
/* WARNING: Removing unreachable block (ram,0x00448914) */
/* WARNING: Removing unreachable block (ram,0x00448918) */

void FUN_004488c0(void)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *local_28;
  char *local_8;
  
  uVar2 = 0xffffffff;
  local_8 = s_mshTrail_bmp_00691238;
  local_28 = (char *)0x0;
  pcVar4 = s_mshTrail_bmp_00691238;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  puVar3 = (undefined1 *)(~uVar2 - 1);
  if ((undefined1 *)0xfffffffd < puVar3) {
    FUN_005fe5fb();
  }
  if (puVar3 == (undefined1 *)0x0) {
    FUN_004040a0(1);
  }
  else {
    if (puVar3 != (undefined1 *)0x0) {
      FUN_004040a0(1);
      FUN_00401a60(puVar3);
    }
    for (uVar2 = (uint)puVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)local_28 = *(undefined4 *)local_8;
      local_8 = local_8 + 4;
      local_28 = local_28 + 4;
    }
    for (uVar2 = (uint)puVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *local_28 = *local_8;
      local_8 = local_8 + 1;
      local_28 = local_28 + 1;
    }
    *puVar3 = 0;
  }
  FUN_00429990(&DAT_006b8e48);
  return;
}

