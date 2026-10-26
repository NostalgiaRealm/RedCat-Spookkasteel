/*
 * FUN_00407323 at 00407323
 * undefined __cdecl FUN_00407323(LPCSTR param_1, char * param_2)
 * Address ranges: 00407323-004074b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_00407323(LPCSTR param_1,char *param_2)

{
  HRESULT HVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  void *this;
  void *this_00;
  void *this_01;
  WCHAR local_41c [260];
  byte local_214 [520];
  int *local_c;
  int *local_8;
  
  HVar1 = CoInitialize((LPVOID)0x0);
  if (HVar1 == 0) {
    HVar1 = CoCreateInstance((IID *)&DAT_00410378,(LPUNKNOWN)0x0,1,(IID *)&DAT_004104f8,&local_8);
    if (HVar1 == 0) {
      iVar2 = (**(code **)*local_8)(local_8,&DAT_004107d8,&local_c);
      if (iVar2 == 0) {
        MultiByteToWideChar(0,0,param_1,-1,local_41c,0x104);
        pcVar3 = FUN_004072dc((char *)local_214,param_2);
        (**(code **)(*local_8 + 0x50))(local_8,local_214);
        pcVar3 = FUN_004072dc((char *)local_214,pcVar3);
        (**(code **)(*local_8 + 0x24))(local_8,local_214);
        pbVar4 = (byte *)FUN_004072dc((char *)local_214,pcVar3);
        uVar5 = FUN_0040c37e(this,pbVar4);
        (**(code **)(*local_8 + 0x44))(local_8,local_214,uVar5);
        pcVar3 = FUN_004072dc((char *)local_214,(char *)pbVar4);
        pcVar3 = FUN_004072dc((char *)local_214,pcVar3);
        uVar6 = FUN_0040c37e(this_00,local_214);
        (**(code **)(*local_8 + 0x3c))(local_8,uVar6 & 7);
        pcVar3 = FUN_004072dc((char *)local_214,pcVar3);
        uVar5 = FUN_0040c37e(this_01,local_214);
        if ((char)uVar5 != '\0') {
          (**(code **)(*local_8 + 0x34))(local_8,uVar5);
        }
        FUN_004072dc((char *)local_214,pcVar3);
        (**(code **)(*local_8 + 0x2c))(local_8,local_214);
        FUN_0040be03(param_1);
        (**(code **)(*local_c + 0x18))(local_c,local_41c,0);
        (**(code **)(*local_c + 8))(local_c);
      }
      (**(code **)(*local_8 + 8))(local_8);
    }
    CoUninitialize();
  }
  return;
}

