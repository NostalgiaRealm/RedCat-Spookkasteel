/*
 * FUN_004191c0 at 004191c0
 * undefined FUN_004191c0(void)
 * Address ranges: 004191c0-004192b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00419219) */
/* WARNING: Removing unreachable block (ram,0x00419220) */
/* WARNING: Removing unreachable block (ram,0x00419224) */
/* WARNING: Removing unreachable block (ram,0x00419228) */

void FUN_004191c0(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *local_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006214f8;
  pvStack_c = ExceptionList;
  uVar3 = 0xffffffff;
  local_30 = (char *)0x0;
  pcVar5 = s_Brin0011_wav_0068f078;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
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
    pcVar5 = s_Brin0011_wav_0068f078;
    for (uVar3 = (uint)puVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)local_30 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_30 = local_30 + 4;
    }
    for (uVar3 = (uint)puVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *local_30 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_30 = local_30 + 1;
    }
    *puVar4 = 0;
  }
  uStack_4 = 0xffffffff;
  uVar2 = FUN_00492540();
  FUN_0040c860(uVar2);
  ExceptionList = pvStack_c;
  return;
}

