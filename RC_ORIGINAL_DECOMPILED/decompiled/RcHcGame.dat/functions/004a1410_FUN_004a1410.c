/*
 * FUN_004a1410 at 004a1410
 * undefined FUN_004a1410(void)
 * Address ranges: 004a1410-004a14d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004a1454) */
/* WARNING: Removing unreachable block (ram,0x004a145b) */
/* WARNING: Removing unreachable block (ram,0x004a145f) */
/* WARNING: Removing unreachable block (ram,0x004a1463) */

void FUN_004a1410(void)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *local_24;
  
  uVar2 = 0xffffffff;
  local_24 = (char *)0x0;
  pcVar4 = s_crate4_wav_006953d4;
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
    pcVar4 = s_crate4_wav_006953d4;
    for (uVar2 = (uint)puVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)local_24 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      local_24 = local_24 + 4;
    }
    for (uVar2 = (uint)puVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *local_24 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      local_24 = local_24 + 1;
    }
    *puVar3 = 0;
  }
  FUN_0040c860(&DAT_006b8df0);
  return;
}

