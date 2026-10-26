/*
 * FUN_0061967c at 0061967c
 * undefined FUN_0061967c(void)
 * Address ranges: 0061967c-00619774
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0061967c(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  bVar2 = false;
  iVar1 = *param_1;
  if (iVar1 < 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    iVar4 = iVar1 % 0x7861f80;
    iVar1 = (iVar1 / 0x7861f80) * 4;
    _DAT_00710154 = iVar1 + 0x46;
    iVar5 = iVar4;
    if (0x1e1337f < iVar4) {
      iVar5 = iVar4 + -0x1e13380;
      _DAT_00710154 = iVar1 + 0x47;
      if (0x1e1337f < iVar5) {
        iVar5 = iVar4 + -0x3c26700;
        _DAT_00710154 = iVar1 + 0x48;
        if (iVar5 < 0x1e28500) {
          bVar2 = true;
        }
        else {
          _DAT_00710154 = iVar1 + 0x49;
          iVar5 = iVar4 + -0x5a4ec00;
        }
      }
    }
    _DAT_0071015c = iVar5 / 0x15180;
    piVar6 = (int *)&DAT_006b3c40;
    if (!bVar2) {
      piVar6 = (int *)&DAT_006b3c74;
    }
    _DAT_00710150 = 1;
    piVar7 = piVar6;
    while (piVar7 = piVar7 + 1, *piVar7 < _DAT_0071015c) {
      _DAT_00710150 = _DAT_00710150 + 1;
    }
    _DAT_00710150 = _DAT_00710150 + -1;
    _DAT_0071014c = _DAT_0071015c - piVar6[_DAT_00710150];
    _DAT_00710158 = (*param_1 / 0x15180 + 4) % 7;
    _DAT_00710148 = (iVar5 % 0x15180) / 0xe10;
    _DAT_00710140 = (iVar5 % 0x15180) % 0xe10;
    _DAT_00710144 = _DAT_00710140 / 0x3c;
    _DAT_00710140 = _DAT_00710140 % 0x3c;
    _DAT_00710160 = 0;
    puVar3 = &DAT_00710140;
  }
  return puVar3;
}

