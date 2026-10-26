/*
 * FUN_00409601 at 00409601
 * undefined __cdecl FUN_00409601(int param_1)
 * Address ranges: 00409601-0040984e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_00409601(int param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  int *piVar3;
  LPCSTR _Source;
  int iVar4;
  char local_40c [256];
  char local_30c [256];
  char local_20c [256];
  BYTE local_10c [256];
  LPCSTR local_c;
  int local_8;
  
  if (*DAT_00413790 != 0) {
    local_8 = 0;
    piVar3 = DAT_00413790;
    do {
      if (**(char **)(local_8 + (int)piVar3) == '\"') {
        _Source = *(char **)(local_8 + (int)piVar3) + 1;
        pCVar1 = FUN_0040be4c(_Source,0x22);
        piVar3 = DAT_00413790;
        if (pCVar1 != (LPCSTR)0x0) {
          _strncpy(local_20c,_Source,(int)pCVar1 - (int)_Source);
          local_20c[(int)pCVar1 - (int)_Source] = '\0';
          for (; (*_Source != '\0' && (*_Source != '\r')); _Source = _Source + 1) {
          }
          while( true ) {
            pCVar1 = _Source;
            if (*_Source != '\0') {
              pCVar1 = _Source + 2;
            }
            piVar3 = DAT_00413790;
            if (*pCVar1 == '\0') break;
            _Source = pCVar1;
            if (*pCVar1 == '\"') {
              _Source = pCVar1 + 1;
              local_c = pCVar1;
              pCVar1 = FUN_0040be4c(_Source,0x22);
              if (pCVar1 != (LPCSTR)0x0) {
                _strncpy(local_30c,_Source,(int)pCVar1 - (int)_Source);
                local_30c[(int)pCVar1 - (int)_Source] = '\0';
                _Source = pCVar1 + 1;
                if ((*_Source == ',') && (pCVar1[2] == '\"')) {
                  _Source = pCVar1 + 3;
                  pCVar1 = FUN_0040be4c(_Source,0x22);
                  if (pCVar1 != (LPCSTR)0x0) {
                    _strncpy(local_40c,_Source,(int)pCVar1 - (int)_Source);
                    local_40c[(int)pCVar1 - (int)_Source] = '\0';
                    iVar4 = param_1 * 4;
                    iVar2 = lstrcmpiA(local_40c,(LPCSTR)(*(int *)(iVar4 + DAT_00413734) + 0x200));
                    if ((iVar2 == 0) ||
                       ((iVar2 = lstrcmpiA(local_20c,*(LPCSTR *)(iVar4 + DAT_00413734)), iVar2 == 0
                        && (iVar2 = lstrcmpiA(local_30c,
                                              (LPCSTR)(*(int *)(iVar4 + DAT_00413734) + 0x100)),
                           iVar2 == 0)))) {
                      *local_c = '*';
                      wsprintfA((LPSTR)local_10c,s__ShowGroup__s_2___00412644,local_20c);
                      FUN_0040984f(local_10c);
                      wsprintfA((LPSTR)local_10c,s__ShowGroup__s_1___00412630,local_20c);
                      FUN_0040984f(local_10c);
                      wsprintfA((LPSTR)local_10c,s__DeleteItem__s___0041261c,local_30c);
                      FUN_0040984f(local_10c);
                      iVar2 = FUN_00409896(*(char **)(local_8 + (int)DAT_00413790));
                      if ((iVar2 != 0) &&
                         (iVar2 = lstrcmpiA(local_20c,s_STARTUP_00412614), iVar2 != 0)) {
                        wsprintfA((LPSTR)local_10c,s__DeleteGroup__s___00412600,local_20c);
                        FUN_0040984f(local_10c);
                      }
                    }
                  }
                }
              }
            }
            for (; (*_Source != '\0' && (*_Source != '\r')); _Source = _Source + 1) {
            }
          }
        }
      }
      local_8 = local_8 + 4;
    } while (*(int *)(local_8 + (int)piVar3) != 0);
  }
  return;
}

