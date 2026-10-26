/*
 * FUN_005e8df0 at 005e8df0
 * undefined FUN_005e8df0(void)
 * Address ranges: 005e8df0-005e8eb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65154c slot 3 for .?AV?$numpunct@D@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65154c slot 3 for
   .?AV?$numpunct@D@std@@. Original bytes unchanged; names and types still inferred. */

undefined1 * __thiscall FUN_005e8df0(int param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = *(char **)(param_1 + 8);
  *param_2 = param_2._0_1_;
  uVar3 = 0xffffffff;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  pcVar6 = pcVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0xfffffffd < uVar3) {
    FUN_005fe5fb();
  }
  iVar2 = *(int *)(param_2 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004040a0(1);
      return param_2;
    }
    if ((*(uint *)(param_2 + 0xc) < 0x20) && (uVar3 <= *(uint *)(param_2 + 0xc))) goto LAB_005e8e8f;
    FUN_004040a0(1);
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004040a0(0);
    return param_2;
  }
  FUN_00401a60(uVar3);
LAB_005e8e8f:
  pcVar6 = *(char **)(param_2 + 4);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(uint *)(param_2 + 8) = uVar3;
  *(undefined1 *)(*(int *)(param_2 + 4) + uVar3) = 0;
  return param_2;
}

