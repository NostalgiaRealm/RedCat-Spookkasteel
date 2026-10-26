/*
 * FUN_00615307 at 00615307
 * undefined FUN_00615307(void)
 * Address ranges: 00615307-00615372
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_00615307(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar1 = FUN_0061503c();
    if (iVar1 == 0) {
      iVar1 = FUN_006156cf();
      *param_1 = iVar1;
      if (iVar1 == 0) {
        param_1[1] = param_1[1] & 0xfffffff3U | 3;
      }
      else {
        iVar1 = FUN_00614d0f(0x10,0);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_0061578b(param_2,0);
        }
        FUN_00615724(uVar2);
      }
    }
    else {
      FUN_006154a5(param_2);
    }
  }
  return param_1;
}

