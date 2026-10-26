/*
 * FUN_0061d9a1 at 0061d9a1
 * undefined FUN_0061d9a1(void)
 * Address ranges: 0061d9a1-0061dad8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061d9a1(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  DWORD DVar4;
  char *_Source;
  char *_Dest;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  char local_84 [128];
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    pbVar7 = &DAT_00710358;
    iVar5 = FUN_0061ecd1(param_2,param_3,&DAT_00710358,4,0);
    if (iVar5 != 0) {
      *param_4 = '\0';
      while( true ) {
        bVar1 = *pbVar7;
        if (DAT_006b28bc < 2) {
          uVar6 = (byte)PTR_DAT_006b26b0[(uint)bVar1 * 2] & 4;
        }
        else {
          uVar6 = FUN_0060e0ee(bVar1,4);
        }
        if (uVar6 == 0) break;
        pbVar7 = pbVar7 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x71035f < (int)pbVar7) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_84;
  bVar2 = false;
  sVar3 = FUN_0061ede4(param_2,param_3,local_84,0x80,0);
  if (sVar3 == 0) {
    DVar4 = GetLastError();
    if (DVar4 != 0x7a) {
      return 0xffffffff;
    }
    sVar3 = FUN_0061ede4(param_2,param_3,0,0,0);
    if (sVar3 == 0) {
      return 0xffffffff;
    }
    _Source = _malloc(sVar3);
    if (_Source == (char *)0x0) {
      return 0xffffffff;
    }
    bVar2 = true;
    sVar3 = FUN_0061ede4(param_2,param_3,_Source,sVar3,0);
    if (sVar3 == 0) goto LAB_0061da3f;
  }
  _Dest = _malloc(sVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,sVar3);
    if (bVar2) {
      FUN_0060b25d(_Source);
    }
    return 0;
  }
  if (!bVar2) {
    return 0xffffffff;
  }
LAB_0061da3f:
  FUN_0060b25d(_Source);
  return 0xffffffff;
}

