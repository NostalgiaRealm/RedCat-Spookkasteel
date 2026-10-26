/*
 * FUN_0061ecd1 at 0061ecd1
 * undefined FUN_0061ecd1(void)
 * Address ranges: 0061ecd1-0061ed89;0061ed95-0061ede3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0061ecd1(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00653210;
  puStack_10 = &LAB_006106d0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_00710374 == 0) {
    ExceptionList = &local_14;
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_00710374 = 2;
    }
    else {
      DAT_00710374 = 1;
    }
  }
  if (DAT_00710374 != 1) {
    if (DAT_00710374 == 2) {
      if (param_5 == 0) {
        param_5 = DAT_0070fffc;
      }
      iVar1 = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
      if (iVar1 != 0) {
        local_8 = 0;
        FUN_0060df70();
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x34) &&
           (iVar1 = GetLocaleInfoA(param_1,param_2,&stack0xffffffcc,iVar1), iVar1 != 0)) {
          if (param_4 == 0) {
            param_4 = 0;
            param_3 = (LPWSTR)0x0;
          }
          iVar1 = MultiByteToWideChar(param_5,1,&stack0xffffffcc,-1,param_3,param_4);
          ExceptionList = local_14;
          return iVar1;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return iVar1;
}

