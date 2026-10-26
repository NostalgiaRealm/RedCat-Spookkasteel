/*
 * FUN_00407a97 at 00407a97
 * undefined __cdecl FUN_00407a97(byte * param_1, int param_2, LPCSTR param_3, char * param_4, byte * param_5, HKEY param_6)
 * Address ranges: 00407a97-00407c35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl
FUN_00407a97(byte *param_1,int param_2,LPCSTR param_3,char *param_4,byte *param_5,HKEY param_6)

{
  char cVar1;
  int iVar2;
  void *this;
  uint uVar3;
  byte bVar4;
  undefined *this_00;
  DWORD cbData;
  byte *pbVar5;
  byte *pbVar6;
  undefined *this_01;
  
  if (DAT_004136b0 == 0) {
    if ((*param_4 == '\0') && (param_1 == (byte *)0x0)) {
      RegSetValueA((HKEY)0x80000000,param_3,1,(LPCSTR)param_5,0);
    }
  }
  else {
    if (param_6 == (HKEY)0x0) {
      iVar2 = RegOpenKeyExA(*(HKEY *)(&DAT_00412030 + (int)param_1 * 4),param_3,0,0x1f,&param_6);
    }
    else {
      iVar2 = RegCreateKeyExA(*(HKEY *)(&DAT_00412030 + (int)param_1 * 4),param_3,0,(LPSTR)0x0,0,6,
                              (LPSECURITY_ATTRIBUTES)0x0,&param_6,(LPDWORD)&param_1);
    }
    pbVar5 = param_5;
    if (iVar2 == 0) {
      iVar2 = lstrlenA((LPCSTR)param_5);
      cbData = iVar2 + 1;
      if (param_2 == 3) {
        iVar2 = FUN_0040c2f3(this_00,pbVar5);
        *(int *)pbVar5 = iVar2;
        cbData = 4;
      }
      else if (param_2 == 2) {
        cbData = 0;
        bVar4 = *param_5;
        pbVar6 = pbVar5;
        while (pbVar5 = param_5, param_5 = pbVar5, bVar4 != 0) {
          iVar2 = lstrlenA((LPCSTR)pbVar6);
          cbData = cbData + 1 + iVar2;
          iVar2 = lstrlenA((LPCSTR)pbVar6);
          pbVar5 = pbVar6 + iVar2 + 1;
          pbVar6 = pbVar6 + iVar2 + 1;
          bVar4 = *pbVar5;
        }
      }
      else if (param_2 == 4) {
        cbData = 0;
        param_5 = (byte *)((uint)param_5 & 0xffffff);
        bVar4 = *pbVar5;
        param_3 = (LPCSTR)0x0;
        param_1 = pbVar5;
        this_01 = this_00;
        pbVar6 = pbVar5;
        while (bVar4 != 0) {
          this = (void *)(int)(char)*pbVar6;
          uVar3 = FUN_0040c0a8(this_01,(uint)this);
          bVar4 = (byte)uVar3;
          *pbVar6 = bVar4;
          if (DAT_0041311c < 2) {
            uVar3 = (byte)PTR_DAT_00412f10[(char)bVar4 * 2] & 4;
            this_01 = PTR_DAT_00412f10;
          }
          else {
            this_01 = (undefined *)0x4;
            uVar3 = FUN_0040c27e(this,(int)(char)bVar4,4);
          }
          if ((uVar3 != 0) || (('@' < (char)*pbVar6 && ((char)*pbVar6 < 'G')))) {
            bVar4 = *pbVar6;
            if (param_3 == (LPCSTR)0x0) {
              if ((char)bVar4 < ':') {
                cVar1 = bVar4 - 0x30;
              }
              else {
                cVar1 = bVar4 - 0x37;
              }
              param_5 = (byte *)CONCAT13(cVar1,param_5._0_3_);
              param_3 = (LPCSTR)0x1;
            }
            else {
              if ((char)bVar4 < ':') {
                cVar1 = -0x30;
              }
              else {
                cVar1 = -0x37;
              }
              bVar4 = param_5._3_1_ << 4 | bVar4 + cVar1;
              this_01 = (undefined *)CONCAT31((int3)((uint)this_01 >> 8),bVar4);
              cbData = cbData + 1;
              param_3 = (LPCSTR)0x0;
              *param_1 = bVar4;
              param_1 = param_1 + 1;
            }
          }
          pbVar6 = pbVar6 + 1;
          bVar4 = *pbVar6;
        }
      }
      RegSetValueExA(param_6,param_4,0,*(DWORD *)(&DAT_00412044 + param_2 * 4),pbVar5,cbData);
      RegCloseKey(param_6);
    }
  }
  return;
}

