



      ////////////////////////////////////////////////////////
      if ( argc == 2)
      if ( strcmp( argv[1] , "xp" ) ==  0 ) 
      {
         nsystem( " cd ; mkdir .icewm " );
         nsystem( " cd ; mkdir .icewm/themes " );
         nsystem( " cd ; cd .icewm ; cd themes ; wget https://raw.githubusercontent.com/spartrekus/icewm-xp/master/WindowsXP.zip -O winxp.zip " );
         nsystem( " cd ; cd .icewm ; cd themes ; unzip -o winxp.zip " );
         nsystem( " cd ; cd .icewm ; wget https://raw.githubusercontent.com/spartrekus/icewm-xp/master/keys -O         keys   " );
         nsystem( " cd ; cd .icewm ; echo 'Theme=WindowsXP/default.theme'  >  theme " );
         nsystem( " cd ; echo setxkbmap de >  .xinitrc  " );
         nsystem( " cd ; echo icewm        >> .xinitrc  " );

         /// wallpaper for i3lock
         chdir( getenv( "HOME" ));
         if ( fexist( ".wallpaper.png" ) == 0 ) 
            nsystem( " cd ; wget \"https://raw.githubusercontent.com/spartrekus/Totally-Libre-Free-GNU-Matrix-Wallpaper-1920x1080/master/cmatrix-free-gnu-wallpaper-unix-1920x1080.png\" -O .wallpaper.png   " );
         return 0;
      }



