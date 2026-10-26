/*
 * FUN_006152a2 at 006152a2
 * undefined FUN_006152a2(void)
 * Address ranges: 006152a2-00615306
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_006152a2(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((char)param_2 != '\0') {
    iVar1 = FUN_0061503c();
    if (iVar1 == 0) {
      iVar1 = FUN_006156cf();
      *param_1 = iVar1;
      if (iVar1 == 0) {
        param_1[1] = param_1[1] & 0xfffffff3U | 3;
      }
      else {
        iVar1 = FUN_00614d0f(0xc,0);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_0061574d(param_2);
        }
        FUN_00615724(uVar2);
      }
    }
    else {
      FUN_0061548c(param_2);
    }
  }
  return param_1;
}

