/*
 * FUN_00471550 at 00471550
 * undefined FUN_00471550(void)
 * Address ranges: 00471550-00471627
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00471550(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  DAT_006b86d8 = local_1;
  uVar2 = 0xffffffff;
  pcVar5 = (char *)&DAT_0069293c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  DAT_006b86dc = (undefined4 *)0x0;
  DAT_006b86e0 = 0;
  DAT_006b86e4 = 0;
  if ((((uVar2 < 0xfffffffe) || (FUN_005fe5fb(), DAT_006b86dc == (undefined4 *)0x0)) ||
      (cVar1 = *(char *)((int)DAT_006b86dc + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      FUN_004040a0(1);
      return;
    }
    if ((DAT_006b86e4 < 0x20) && (uVar2 <= DAT_006b86e4)) goto LAB_004715fd;
    FUN_004040a0(1);
  }
  else if (uVar2 == 0) {
    *(char *)((int)DAT_006b86dc + -1) = cVar1 + -1;
    FUN_004040a0(0);
    return;
  }
  FUN_00401a60(uVar2);
LAB_004715fd:
  puVar4 = &DAT_0069293c;
  puVar6 = DAT_006b86dc;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  DAT_006b86e0 = uVar2;
  *(undefined1 *)((int)DAT_006b86dc + uVar2) = 0;
  return;
}

