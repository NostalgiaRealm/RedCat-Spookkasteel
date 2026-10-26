/*
 * FUN_10029a09 at 10029a09
 * undefined FUN_10029a09(void)
 * Address ranges: 10029a09-10029a9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029a09(undefined8 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_2c [24];
  int local_14;
  int local_10;
  
  FUN_10030cac(*param_1,&local_14,local_2c);
  iVar1 = local_10 + -1;
  pcVar2 = (char *)((uint)(local_14 == 0x2d) + param_2);
  FUN_10030c35(pcVar2,param_3,&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || (param_3 <= local_10)) {
    FUN_1002984b(param_2,param_3,param_4,&local_14,1);
  }
  else {
    if (iVar1 < local_10) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_10029962(param_2,param_3,&local_14,1);
  }
  return;
}

