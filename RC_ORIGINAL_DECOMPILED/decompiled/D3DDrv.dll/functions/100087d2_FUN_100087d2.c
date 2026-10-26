/*
 * FUN_100087d2 at 100087d2
 * undefined __cdecl FUN_100087d2(undefined8 * param_1, char * param_2, size_t param_3, int param_4)
 * Address ranges: 100087d2-10008864
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100087d2(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1000bc15((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_1000bb9e(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_10008614(param_2,param_3,param_4,&local_14,'\x01');
  }
  else {
    pcVar2 = param_2 + (local_14 == 0x2d);
    if (iVar1 < local_10) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_1000872b(param_2,param_3,&local_14,'\x01');
  }
  return;
}

