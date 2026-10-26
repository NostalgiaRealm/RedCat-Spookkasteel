/*
 * FUN_00519854 at 00519854
 * undefined __register FUN_00519854(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * Address ranges: 00519854-00519922
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00519854(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  tagRECT local_24;
  POINT local_14;
  WPARAM local_c;
  undefined1 local_5;
  
  local_5 = (undefined1)param_3;
  FUN_00433a98((int)param_1,param_2,param_3,param_4,param_5);
  if ((char)param_2 == '\0') {
    FUN_0041160c(param_5,param_4,&local_14.x);
    local_c = FUN_0042c948(param_1,&local_14,'\x01');
    if (local_c != 0xffffffff) {
      bVar1 = FUN_005197d0(param_1,local_c);
      if (bVar1 != 0) {
        cVar2 = FUN_00403270(param_1,extraout_EDX,extraout_ECX);
        if (cVar2 == '\0') {
          FUN_0042c9d4((int)param_1,local_c,&local_24);
          iVar3 = FUN_005192f4();
          if (param_5 - local_24.left < iVar3) {
            FUN_00519924(param_1,local_c);
          }
        }
        else {
          FUN_0042c9d4((int)param_1,local_c,&local_24);
          iVar3 = FUN_005192f4();
          iVar3 = param_5 - (local_24.right - iVar3);
          if (0 < iVar3) {
            iVar4 = FUN_005192f4();
            if (iVar3 < iVar4) {
              FUN_00519924(param_1,local_c);
            }
          }
        }
      }
    }
  }
  return;
}

