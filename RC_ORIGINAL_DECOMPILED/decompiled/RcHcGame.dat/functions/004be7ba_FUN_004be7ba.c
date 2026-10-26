/*
 * FUN_004be7ba at 004be7ba
 * undefined FUN_004be7ba(void)
 * Address ranges: 004be7ba-004be983
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004be7ba(void)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  LPCSTR lpText;
  LPCSTR lpCaption;
  int unaff_EBP;
  int unaff_ESI;
  char *pcVar7;
  
  iVar4 = *(int *)(unaff_ESI + 0x3a0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = *(int *)(iVar4 + 0x100);
  if (iVar2 != 0) {
    if (iVar2 == 0) {
      *(undefined1 *)(unaff_EBP + -0x48) = *(undefined1 *)(unaff_EBP + -0x13);
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      pcVar3 = (code *)FUN_005a07f0(s_m_Engine_006934e0,s___AdamSource_AdamEngine_h_0068eb58,0x1ad,
                                    unaff_EBP + -0x48);
      (*pcVar3)();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004040a0(1);
    }
    FUN_005bb9e0(*(undefined4 *)(iVar4 + 0x100));
  }
  cVar1 = *(char *)(unaff_EBP + -0x11);
  if ((cVar1 == '\0') && (*(char *)(unaff_EBP + -0x13) != '\0')) {
    FUN_004bc090();
  }
  else {
    *(undefined1 *)(unaff_ESI + 0x45) = 1;
    FUN_005afdd0(&LAB_004c4110);
    if (cVar1 != '\0') {
      iVar4 = DAT_006b915c;
      if (DAT_006b915c == 0) {
        iVar4 = FUN_004bc480();
      }
      puVar5 = *(undefined1 **)(iVar4 + 0x74);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      FUN_005ae390(unaff_EBP + -0x48,s_Er_is_een_onverwachte_fout_opget_0069784c,puVar5);
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      *(undefined1 *)(unaff_EBP + -0x38) = *(undefined1 *)(unaff_EBP + -0x13);
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      lpCaption = *(LPCSTR *)(unaff_EBP + -0x34);
      if (lpCaption == (LPCSTR)0x0) {
        lpCaption = "";
      }
      lpText = *(LPCSTR *)(unaff_EBP + -0x44);
      if (lpText == (LPCSTR)0x0) {
        lpText = "";
      }
      MessageBoxA(*(HWND *)(*(int *)(unaff_ESI + 0x58) + 0x54),lpText,lpCaption,0x10);
      iVar4 = *(int *)(unaff_EBP + -0x34);
      if (iVar4 != 0) {
        cVar1 = *(char *)(iVar4 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iVar4 + -1));
        }
        else {
          *(char *)(iVar4 + -1) = cVar1 + -1;
        }
      }
      iVar4 = *(int *)(unaff_EBP + -0x44);
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (iVar4 != 0) {
        cVar1 = *(char *)(iVar4 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iVar4 + -1));
        }
        else {
          *(char *)(iVar4 + -1) = cVar1 + -1;
        }
      }
      *(undefined4 *)(unaff_EBP + -0x44) = 0;
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
      *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    }
  }
  FUN_005af920(*(undefined4 *)(unaff_EBP + -0x20));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005ae770();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

