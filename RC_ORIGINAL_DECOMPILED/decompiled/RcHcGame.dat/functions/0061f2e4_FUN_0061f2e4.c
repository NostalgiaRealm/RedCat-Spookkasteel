/*
 * FUN_0061f2e4 at 0061f2e4
 * undefined FUN_0061f2e4(void)
 * Address ranges: 0061f2e4-0061f46a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061f2e4(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  LPCSTR lpName;
  int *piVar5;
  bool bVar6;
  
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  pcVar1 = (char *)FUN_0061f5a0(param_1,0x3d);
  if (pcVar1 == (char *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == pcVar1) {
    return 0xffffffff;
  }
  bVar6 = pcVar1[1] == '\0';
  if (DAT_0070ffc0 == DAT_0070ffc4) {
    DAT_0070ffc0 = (int *)FUN_0061f4c3(DAT_0070ffc0);
  }
  if (DAT_0070ffc0 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_0070ffc8 == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_0070ffc0 = _malloc(4);
      if (DAT_0070ffc0 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_0070ffc0 = 0;
      if (DAT_0070ffc8 == (undefined4 *)0x0) {
        DAT_0070ffc8 = _malloc(4);
        if (DAT_0070ffc8 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_0070ffc8 = 0;
      }
    }
    else {
      iVar2 = FUN_0061ec63();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_0070ffc0;
  iVar2 = FUN_0061f46b(param_1,(int)pcVar1 - (int)param_1);
  if ((iVar2 < 0) || (*piVar3 == 0)) {
    if (bVar6) {
      return 0;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    piVar3 = (int *)FUN_0060e293(piVar3,iVar2 * 4 + 8);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[iVar2] = (int)param_1;
    piVar3[iVar2 + 1] = 0;
  }
  else {
    if (!bVar6) {
      piVar3[iVar2] = (int)param_1;
      goto LAB_0061f418;
    }
    piVar5 = piVar3 + iVar2;
    FUN_0060b25d(piVar3[iVar2]);
    for (; *piVar5 != 0; piVar5 = piVar5 + 1) {
      iVar2 = iVar2 + 1;
      *piVar5 = piVar5[1];
    }
    piVar3 = (int *)FUN_0060e293(piVar3,iVar2 << 2);
    if (piVar3 == (int *)0x0) goto LAB_0061f418;
  }
  DAT_0070ffc0 = piVar3;
LAB_0061f418:
  if (param_2 != 0) {
    sVar4 = _strlen(param_1);
    lpName = _malloc(sVar4 + 2);
    if (lpName != (LPCSTR)0x0) {
      FUN_00611110(lpName,param_1);
      pcVar1[(int)lpName - (int)param_1] = '\0';
      SetEnvironmentVariableA
                (lpName,(LPCSTR)(~-(uint)bVar6 & (uint)(pcVar1 + ((int)lpName - (int)param_1) + 1)))
      ;
      FUN_0060b25d(lpName);
    }
  }
  return 0;
}

