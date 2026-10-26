/*
 * FUN_0041d340 at 0041d340
 * undefined FUN_0041d340(void)
 * Address ranges: 0041d340-0041d431
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0041d399) */
/* WARNING: Removing unreachable block (ram,0x0041d3a0) */
/* WARNING: Removing unreachable block (ram,0x0041d3a4) */
/* WARNING: Removing unreachable block (ram,0x0041d3a8) */

void FUN_0041d340(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *local_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00621bd8;
  pvStack_c = ExceptionList;
  uVar3 = 0xffffffff;
  local_30 = (undefined4 *)0x0;
  pcVar6 = (char *)&DAT_0068f3b0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  puVar4 = (undefined1 *)(~uVar3 - 1);
  ExceptionList = &pvStack_c;
  if ((undefined1 *)0xfffffffd < puVar4) {
    ExceptionList = &pvStack_c;
    FUN_005fe5fb();
  }
  if (puVar4 == (undefined1 *)0x0) {
    FUN_004040a0(1);
  }
  else {
    if (puVar4 != (undefined1 *)0x0) {
      FUN_004040a0(1);
      FUN_00401a60(puVar4);
    }
    puVar5 = &DAT_0068f3b0;
    for (uVar3 = (uint)puVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *local_30 = *puVar5;
      puVar5 = puVar5 + 1;
      local_30 = local_30 + 1;
    }
    for (uVar3 = (uint)puVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)local_30 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      local_30 = (undefined4 *)((int)local_30 + 1);
    }
    *puVar4 = 0;
  }
  uStack_4 = 0xffffffff;
  uVar2 = FUN_00492540();
  FUN_0040c860(uVar2);
  ExceptionList = pvStack_c;
  return;
}

