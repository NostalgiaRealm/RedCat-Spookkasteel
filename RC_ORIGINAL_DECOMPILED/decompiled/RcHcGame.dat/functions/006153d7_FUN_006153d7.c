/*
 * FUN_006153d7 at 006153d7
 * undefined FUN_006153d7(void)
 * Address ranges: 006153d7-0061544f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_006153d7(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0061503c();
  if (((iVar1 == 0) && (param_2 != 1)) && (param_2 != 3)) {
    iVar1 = FUN_00614d0f(0x10,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_006158ad(param_2);
    }
    if (iVar1 == 0) {
      *param_1 = 0;
    }
    else {
      iVar2 = FUN_006156cf();
      *param_1 = iVar2;
      if (iVar2 != 0) {
        FUN_00615724(iVar1);
      }
    }
    if (*param_1 == 0) {
      param_1[1] = param_1[1] & 0xfffffff3U | 3;
    }
  }
  else {
    FUN_00615520(param_2);
  }
  return param_1;
}

