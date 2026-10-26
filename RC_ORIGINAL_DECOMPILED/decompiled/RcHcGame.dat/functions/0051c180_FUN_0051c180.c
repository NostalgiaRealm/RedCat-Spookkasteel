/*
 * FUN_0051c180 at 0051c180
 * undefined FUN_0051c180(void)
 * Address ranges: 0051c180-0051c217
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051c180(void)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  iVar1 = FUN_0040cf10();
  if (*(int *)(iVar1 + 0x98) == 1) {
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    uVar5 = 1;
    FUN_0040cf10(1,0,&CAdamGameState::RTTI_Type_Descriptor,
                 &CAdamGameState_GS_LOADING::RTTI_Type_Descriptor,0);
    uVar5 = FUN_0051c250(uVar5);
    iVar1 = FUN_0060a6f2(uVar5);
    DVar2 = timeGetTime();
    uVar5 = *(undefined4 *)(iVar1 + 100);
    iVar3 = __ftol();
    iVar4 = FUN_00484d70(DVar2,uVar5);
    if ((iVar3 <= iVar4) && (*(char *)(iVar1 + 0x29) != '\0')) {
      FUN_0051abb0();
    }
  }
  return;
}

