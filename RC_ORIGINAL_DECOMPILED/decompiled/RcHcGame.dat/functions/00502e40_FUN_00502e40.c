/*
 * FUN_00502e40 at 00502e40
 * undefined FUN_00502e40(void)
 * Address ranges: 00502e40-00502f3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00502e40(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00635bd8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x1ed);
  iVar1 = param_1[0x2c];
  cVar3 = '\x01';
  local_8 = 1;
  if (iVar1 != 0) {
    if (iVar1 != -1) {
      iVar2 = param_1[0x2d];
      if (iVar2 == -1) {
        param_1[0x2e] = 0x3f800000;
        param_1[0x2d] = iVar1 + param_2;
      }
      else if (iVar2 < param_2) {
        param_1[0x2e] = 0;
        cVar3 = '\0';
      }
      else if (iVar1 < 1) {
        param_1[0x2e] = 0;
      }
      else {
        param_1[0x2e] = (int)((float)(iVar2 - param_2) / (float)iVar1);
      }
    }
    *(char *)(param_1 + 0x2f) = cVar3;
    if (cVar3 != '\0') goto LAB_00502f1a;
  }
  if ((code *)param_1[0x3b] == (code *)0x0) {
    (**(code **)(*param_1 + 8))(param_2,param_3);
  }
  else {
    (*(code *)param_1[0x3b])(param_1,param_2,param_3);
  }
LAB_00502f1a:
  local_8 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_10;
  return;
}

