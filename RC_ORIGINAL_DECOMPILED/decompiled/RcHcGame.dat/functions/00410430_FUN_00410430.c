/*
 * FUN_00410430 at 00410430
 * undefined FUN_00410430(void)
 * Address ranges: 00410430-004104f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00410474) */
/* WARNING: Removing unreachable block (ram,0x0041047b) */
/* WARNING: Removing unreachable block (ram,0x0041047f) */
/* WARNING: Removing unreachable block (ram,0x00410483) */

void FUN_00410430(void)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *local_24;
  
  uVar2 = 0xffffffff;
  local_24 = (undefined4 *)0x0;
  pcVar5 = (char *)&DAT_0068e938;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
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
    puVar4 = &DAT_0068e938;
    for (uVar2 = (uint)puVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *local_24 = *puVar4;
      puVar4 = puVar4 + 1;
      local_24 = local_24 + 1;
    }
    for (uVar2 = (uint)puVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)local_24 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      local_24 = (undefined4 *)((int)local_24 + 1);
    }
    *puVar3 = 0;
  }
  FUN_0040c860(&DAT_006b8df0);
  return;
}

