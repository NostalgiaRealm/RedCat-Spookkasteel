/*
 * FUN_00445d90 at 00445d90
 * undefined FUN_00445d90(void)
 * Address ranges: 00445d90-00445e5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00445dd9) */
/* WARNING: Removing unreachable block (ram,0x00445de0) */
/* WARNING: Removing unreachable block (ram,0x00445de4) */
/* WARNING: Removing unreachable block (ram,0x00445de8) */

void FUN_00445d90(void)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *local_28;
  char *local_8;
  
  uVar2 = 0xffffffff;
  local_8 = s_eball1_A_bmp_00691104;
  local_28 = (char *)0x0;
  pcVar4 = s_eball1_A_bmp_00691104;
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

