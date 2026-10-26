/*
 * FUN_005adce0 at 005adce0
 * undefined FUN_005adce0(void)
 * Address ranges: 005adce0-005add3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005adce0(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 2) {
    return 0;
  }
  pcVar2 = *(char **)(param_1 + 4);
  pcVar3 = "";
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
  }
  if (*pcVar3 != '\'') {
    pcVar3 = "";
    if (pcVar2 != (char *)0x0) {
      pcVar3 = pcVar2;
    }
    if (*pcVar3 != '\"') {
      return 0;
    }
  }
  pcVar3 = "";
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2 + iVar1 + -1;
  }
  if (*pcVar3 != '\'') {
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar2 + iVar1 + -1;
    }
    if (*pcVar2 != '\"') {
      return 0;
    }
  }
  return 1;
}

