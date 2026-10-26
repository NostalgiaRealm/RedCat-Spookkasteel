/*
 * FUN_0056fb40 at 0056fb40
 * undefined FUN_0056fb40(void)
 * Address ranges: 0056fb40-0056fcd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0056fb40(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char *extraout_ECX;
  char *extraout_ECX_00;
  uint uVar5;
  char *extraout_ECX_01;
  char *extraout_ECX_02;
  char *pcVar6;
  char *pcStack_68;
  char local_4c [4];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  char acStack_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640fb0;
  pvStack_c = ExceptionList;
  pcStack_68 = param_1;
  iVar2 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    pcStack_68 = (char *)0x56fb6f;
    ExceptionList = &pvStack_c;
    iVar2 = FUN_004bc480();
    pcStack_68 = extraout_ECX;
  }
  iVar3 = *(int *)(iVar2 + 0x5c0);
  if (iVar3 == -0x80000000) {
    pcStack_68 = *(char **)(iVar2 + 0x574);
    if (pcStack_68 == (char *)0x0) {
      pcStack_68 = "";
    }
    iVar3 = FUN_0060af10();
    *(int *)(iVar2 + 0x5c0) = iVar3;
    pcStack_68 = extraout_ECX_00;
  }
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x108) == 0) {
      uVar5 = 0xffffffff;
      local_48 = 0;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcStack_68 = (char *)(~uVar5 - 1);
      local_44 = 0;
      local_40 = 0;
      FUN_004040f0(&DAT_006b3f70);
      pcStack_68 = local_4c;
      local_4 = 0;
      pcVar4 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                    s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141);
      (*pcVar4)();
      local_4 = 0xffffffff;
      pcStack_68 = extraout_ECX_01;
      if (local_48 != 0) {
        pcStack_68 = (char *)(local_48 + -1);
        cVar1 = *(char *)(local_48 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
          pcStack_68 = extraout_ECX_02;
        }
        else {
          *pcStack_68 = cVar1 + -1;
        }
      }
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
    }
    if (*(char *)(*(int *)(param_1 + 0x108) + 0x85) != '\0') {
      FUN_004042e0(&pcStack_68);
      FUN_005545a0();
      pcStack_68 = param_1 + 700;
      local_4 = 1;
      acStack_3c[0] = '\0';
      acStack_3c[1] = '\0';
      acStack_3c[2] = '\x7f';
      acStack_3c[3] = 'C';
      acStack_3c[4] = '\0';
      acStack_3c[5] = '\0';
      acStack_3c[6] = '\\';
      acStack_3c[7] = 'B';
      acStack_3c[8] = '\0';
      acStack_3c[9] = '\0';
      acStack_3c[10] = -0x10;
      acStack_3c[0xb] = 'B';
      acStack_3c[0xc] = '\0';
      acStack_3c[0xd] = '\0';
      acStack_3c[0xe] = '\x7f';
      acStack_3c[0xf] = 'C';
      FUN_00554a30();
      pcStack_68 = acStack_3c;
      FUN_00554890(param_1 + 0x2d4);
      local_4 = 0xffffffff;
      pcStack_68 = (char *)0x56fcbd;
      FUN_00554630();
    }
  }
  pcStack_68 = (char *)0x56fcc4;
  FUN_0049bcf0();
  ExceptionList = pvStack_c;
  return;
}

