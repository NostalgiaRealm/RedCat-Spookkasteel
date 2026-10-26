/*
 * FUN_0044f530 at 0044f530
 * undefined FUN_0044f530(void)
 * Address ranges: 0044f530-0044f5fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0044f579) */
/* WARNING: Removing unreachable block (ram,0x0044f580) */
/* WARNING: Removing unreachable block (ram,0x0044f584) */
/* WARNING: Removing unreachable block (ram,0x0044f588) */

void FUN_0044f530(void)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 *local_28;
  undefined4 *local_8;
  
  uVar2 = 0xffffffff;
  local_8 = (undefined4 *)&DAT_006917ec;
  local_28 = (undefined4 *)0x0;
  pcVar4 = &DAT_006917ec;
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
      *local_28 = *local_8;
      local_8 = local_8 + 1;
      local_28 = local_28 + 1;
    }
    for (uVar2 = (uint)puVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)local_28 = *(undefined1 *)local_8;
      local_8 = (undefined4 *)((int)local_8 + 1);
      local_28 = (undefined4 *)((int)local_28 + 1);
    }
    *puVar3 = 0;
  }
  FUN_00429990(&DAT_006b8e48);
  return;
}

