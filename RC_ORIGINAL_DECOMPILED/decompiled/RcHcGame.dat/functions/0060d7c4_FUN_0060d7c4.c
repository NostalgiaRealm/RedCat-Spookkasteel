/*
 * FUN_0060d7c4 at 0060d7c4
 * undefined FUN_0060d7c4(void)
 * Address ranges: 0060d7c4-0060d81a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_0060d7c4(char *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 < 1) {
    param_1 = (char *)0x0;
  }
  else {
    param_2 = param_2 + -1;
    pcVar3 = param_1;
    if (param_2 != 0) {
      while( true ) {
        piVar1 = param_3 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          uVar2 = FUN_0061ae60(param_3);
        }
        else {
          uVar2 = (uint)*(byte *)*param_3;
          *param_3 = (byte *)*param_3 + 1;
        }
        if (uVar2 == 0xffffffff) break;
        *pcVar3 = (char)uVar2;
        pcVar3 = pcVar3 + 1;
        if (((char)uVar2 == '\n') || (param_2 = param_2 + -1, param_2 == 0)) goto LAB_0060d808;
      }
      if (pcVar3 == param_1) {
        return (char *)0x0;
      }
    }
LAB_0060d808:
    *pcVar3 = '\0';
  }
  return param_1;
}

