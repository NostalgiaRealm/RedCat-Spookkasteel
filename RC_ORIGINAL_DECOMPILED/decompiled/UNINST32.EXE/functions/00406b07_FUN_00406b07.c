/*
 * FUN_00406b07 at 00406b07
 * undefined4 __cdecl FUN_00406b07(char * param_1, int param_2, HFILE param_3, int param_4)
 * Address ranges: 00406b07-00406ba2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_00406b07(char *param_1,int param_2,HFILE param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  param_2 = param_2 + -1;
  pcVar3 = param_1;
  do {
    while( true ) {
      if ((int)DAT_00413aa4 <= DAT_0041376c) {
        DAT_0041378c = DAT_0041378c + DAT_0041376c;
        DAT_0041376c = 0;
        DAT_00413aa4 = _lread(param_3,DAT_00413684,0x4000);
        if ((int)DAT_00413aa4 < 1) {
          uVar2 = 0;
          goto LAB_00406b9b;
        }
      }
      cVar1 = *(char *)((int)DAT_00413684 + DAT_0041376c);
      if (cVar1 == '\r') break;
      if ((cVar1 != '\n') && (0 < param_2)) {
        param_2 = param_2 + -1;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      }
      DAT_0041376c = DAT_0041376c + 1;
    }
    DAT_0041376c = DAT_0041376c + 1;
  } while ((pcVar3 == param_1) && (param_4 == 0));
  uVar2 = 1;
LAB_00406b9b:
  *pcVar3 = '\0';
  return uVar2;
}

