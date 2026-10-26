/*
 * FUN_005925f1 at 005925f1
 * undefined FUN_005925f1(void)
 * Address ranges: 005925f1-00592708
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005925f1(void)

{
  char cVar1;
  HWND lpText;
  uint uVar2;
  HWND pHVar3;
  int unaff_EBP;
  HWND unaff_ESI;
  char *pcVar4;
  
  *(HWND *)(unaff_EBP + -4) = unaff_ESI;
  if (unaff_ESI < *(HWND *)(unaff_EBP + -0x30)) {
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a6310,0x187,unaff_EBP + -0x38);
    FUN_005ae390(unaff_EBP + -0x48,s_Er_is_een_onverwachte_fout_opget_006a635c);
    *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x13);
    uVar2 = 0xffffffff;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    pcVar4 = &DAT_006b3f70;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *(HWND *)(unaff_EBP + -0x24) = unaff_ESI;
    *(HWND *)(unaff_EBP + -0x20) = unaff_ESI;
    *(HWND *)(unaff_EBP + -0x1c) = unaff_ESI;
    FUN_004040f0(&DAT_006b3f70,~uVar2 - 1);
    pHVar3 = (HWND)&DAT_0064a3b4;
    if (*(HWND *)(unaff_EBP + -0x24) != unaff_ESI) {
      pHVar3 = *(HWND *)(unaff_EBP + -0x24);
    }
    lpText = *(HWND *)(unaff_EBP + -0x44);
    if (lpText == unaff_ESI) {
      lpText = (HWND)&DAT_0064a3b4;
    }
    MessageBoxA(unaff_ESI,(LPCSTR)lpText,(LPCSTR)pHVar3,0x10);
    pHVar3 = *(HWND *)(unaff_EBP + -0x24);
    if (pHVar3 != unaff_ESI) {
      pcVar4 = (char *)((int)&pHVar3[-1].unused + 3);
      cVar1 = *(char *)((int)&pHVar3[-1].unused + 3);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(pcVar4);
      }
      else {
        *pcVar4 = cVar1 + -1;
      }
    }
    pHVar3 = *(HWND *)(unaff_EBP + -0x44);
    *(HWND *)(unaff_EBP + -0x24) = unaff_ESI;
    *(HWND *)(unaff_EBP + -0x20) = unaff_ESI;
    *(HWND *)(unaff_EBP + -0x1c) = unaff_ESI;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (pHVar3 != unaff_ESI) {
      cVar1 = *(char *)((int)&pHVar3[-1].unused + 3);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((undefined1 *)((int)&pHVar3[-1].unused + 3));
      }
      else {
        *(char *)((int)&pHVar3[-1].unused + 3) = cVar1 + -1;
      }
    }
  }
  FUN_00592990();
  pHVar3 = *(HWND *)(unaff_EBP + -0x34);
  if (pHVar3 != unaff_ESI) {
    cVar1 = *(char *)((int)&pHVar3[-1].unused + 3);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((undefined1 *)((int)&pHVar3[-1].unused + 3));
    }
    else {
      *(char *)((int)&pHVar3[-1].unused + 3) = cVar1 + -1;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}

