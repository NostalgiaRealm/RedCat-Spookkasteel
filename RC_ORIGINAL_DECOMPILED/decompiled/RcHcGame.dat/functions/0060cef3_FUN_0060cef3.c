/*
 * FUN_0060cef3 at 0060cef3
 * undefined FUN_0060cef3(void)
 * Address ranges: 0060cef3-0060d00a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0060cef3(char *param_1,undefined1 *param_2,undefined2 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined1 local_8c [136];
  
  if (param_1 == (char *)0x0) {
LAB_0060cf99:
    puVar2 = (undefined *)0x0;
  }
  else {
    if ((*param_1 == 'C') && (param_1[1] == '\0')) {
      param_2[1] = 0;
      *param_2 = 0x43;
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
      }
      if (param_4 == (undefined4 *)0x0) {
        return param_2;
      }
      *param_4 = 0;
      return param_2;
    }
    iVar1 = _strcmp(&DAT_006b233c,param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_006b22b8,param_1), iVar1 != 0)) {
      iVar1 = FUN_0060d030(local_8c,param_1);
      if ((iVar1 != 0) || (iVar1 = FUN_0061a3ea(local_8c,&DAT_0070ff58,local_8c), iVar1 == 0))
      goto LAB_0060cf99;
      _DAT_0070ff60 = (uint)DAT_0070ff5c;
      FUN_0060d0fc(&DAT_006b233c,local_8c);
      if (*param_1 == '\0') {
        param_1 = &DAT_006b233c;
      }
      FUN_00611110(&DAT_006b22b8,param_1);
    }
    if (param_3 != (undefined2 *)0x0) {
      FUN_0060eb70(param_3,&DAT_0070ff58,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_0060eb70(param_4,&DAT_0070ff60,4);
    }
    FUN_00611110(param_2,&DAT_006b233c);
    puVar2 = &DAT_006b233c;
  }
  return puVar2;
}

