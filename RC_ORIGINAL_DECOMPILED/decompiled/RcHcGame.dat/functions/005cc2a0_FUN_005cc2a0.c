/*
 * FUN_005cc2a0 at 005cc2a0
 * undefined FUN_005cc2a0(void)
 * Address ranges: 005cc2a0-005cc306
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005cc2a0(int param_1,char *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = param_2;
  puVar1 = *(undefined4 **)(param_1 + 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = __strcmpi((char *)puVar1[1],pcVar3);
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  pcVar3 = (char *)puVar1[2];
  if (*pcVar3 == '*') {
    pcVar3 = pcVar3 + 1;
  }
  FUN_0060b449(pcVar3,&DAT_00690818,&param_1);
  *param_3 = param_1;
  return 1;
}

