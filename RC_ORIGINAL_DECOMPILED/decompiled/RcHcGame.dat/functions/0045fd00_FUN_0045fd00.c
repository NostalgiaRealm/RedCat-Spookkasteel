/*
 * FUN_0045fd00 at 0045fd00
 * undefined FUN_0045fd00(void)
 * Address ranges: 0045fd00-0045fdc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0045fd44) */
/* WARNING: Removing unreachable block (ram,0x0045fd4b) */
/* WARNING: Removing unreachable block (ram,0x0045fd4f) */
/* WARNING: Removing unreachable block (ram,0x0045fd53) */

void FUN_0045fd00(void)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *local_24;
  
  uVar2 = 0xffffffff;
  local_24 = (char *)0x0;
  pcVar4 = s_Explosie07_a_bmp_00692404;
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
    pcVar4 = s_Explosie07_a_bmp_00692404;
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
  FUN_00429990(&DAT_006b8e48);
  return;
}

