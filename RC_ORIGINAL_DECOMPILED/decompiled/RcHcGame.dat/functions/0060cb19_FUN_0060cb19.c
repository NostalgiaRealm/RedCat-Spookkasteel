/*
 * FUN_0060cb19 at 0060cb19
 * undefined FUN_0060cb19(void)
 * Address ranges: 0060cb19-0060cd1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0060cb19(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  char *_Str2;
  undefined4 *puVar7;
  char local_8c [132];
  size_t local_8;
  
  iVar5 = 0;
  if ((param_1 < 0) || (5 < param_1)) {
LAB_0060cc70:
    uVar1 = 0;
  }
  else {
    if (param_1 != 0) {
      if (param_2 != (char *)0x0) {
        uVar1 = FUN_0060cd1f(param_1,param_2);
        return uVar1;
      }
      return (&DAT_006b23c4)[param_1 * 3];
    }
    local_8 = 1;
    param_1 = 0;
    if (param_2 != (char *)0x0) {
      if (((*param_2 == 'L') && (param_2[1] == 'C')) && (param_2[2] == '_')) {
        pcVar2 = (char *)FUN_0061a3b0(param_2,&DAT_00651d6c);
        _Str2 = param_2;
        while (((pcVar2 != (char *)0x0 && (local_8 = (int)pcVar2 - (int)_Str2, local_8 != 0)) &&
               (*pcVar2 != ';'))) {
          param_2 = (char *)0x1;
          ppuVar6 = &PTR_s_LC_COLLATE_006b23cc;
          do {
            iVar5 = _strncmp(*ppuVar6,_Str2,local_8);
            if ((iVar5 == 0) && (sVar3 = _strlen(*ppuVar6), local_8 == sVar3)) break;
            param_2 = (char *)((int)param_2 + 1);
            ppuVar6 = ppuVar6 + 3;
          } while ((int)ppuVar6 < 0x6b23fd);
          pcVar2 = pcVar2 + 1;
          sVar3 = FUN_0060e6e0(pcVar2,&DAT_006a154c);
          if ((sVar3 == 0) && (*pcVar2 != ';')) break;
          if ((int)param_2 < 6) {
            _strncpy(local_8c,pcVar2,sVar3);
            local_8c[sVar3] = '\0';
            iVar5 = FUN_0060cd1f(param_2,local_8c);
            if (iVar5 != 0) {
              param_1 = param_1 + 1;
            }
          }
          if ((pcVar2[sVar3] == '\0') || (_Str2 = pcVar2 + sVar3 + 1, *_Str2 == '\0'))
          goto LAB_0060cc7b;
          pcVar2 = (char *)FUN_0061a3b0(_Str2,&DAT_00651d6c);
        }
        goto LAB_0060cc70;
      }
      iVar4 = FUN_0060cef3(param_2,local_8c,0,0,0);
      if (iVar4 == 0) {
        return 0;
      }
      puVar7 = &DAT_006b23c4;
      do {
        if (puVar7 != &DAT_006b23c4) {
          iVar4 = _strcmp(local_8c,(char *)*puVar7);
          if ((iVar4 == 0) || (iVar4 = FUN_0060cd1f(iVar5,local_8c), iVar4 != 0)) {
            param_1 = param_1 + 1;
          }
          else {
            local_8 = 0;
          }
        }
        puVar7 = puVar7 + 3;
        iVar5 = iVar5 + 1;
      } while ((int)puVar7 < 0x6b2401);
      if (local_8 != 0) {
        uVar1 = FUN_0060ce3a();
        FUN_0060b25d(DAT_006b23c4);
        DAT_006b23c4 = 0;
        return uVar1;
      }
LAB_0060cc7b:
      if (param_1 == 0) {
        return 0;
      }
    }
    uVar1 = FUN_0060ce3a();
  }
  return uVar1;
}

