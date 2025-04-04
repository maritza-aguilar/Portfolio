@import url('https://fonts.googleapis.com/css2?family=Lato:wght@400;700&family=Roboto:ital,wght@0,100..900;1,100..900&display=swap');

*{
    font-family: "Lato , sans-serif";
    padding: 0;
    margin: 0;
    box-sizing: border-box;
}

html{
    scroll-behavior: smooth;
}

h1,h2,h3,h4,h5,h6{
    color: #242424;
    text-align: center;
    line-height: 1.25;
}

h1{
    font-size: 36px;
}

p{
    line-height: 1.5;
    font-size: 16px;
}

a{
    text-decoration: none;
    position: relative;
}

.link__hover-effect:after{
    content: "";
    position: absolute;
    height: 3px;
    background-color: #ff69b4;
    width: 0;
    bottom: -3px;
    right: 0;
    transition: all 300ms ease;
}

.link__hover-effect:hover:after{
    width: 100%;
    left: 0;
}

li{
    list-style: none;
}

.flex-1{
    flex: 1;
}

.flex{
    display: flex;
}

.row{
    width: 100%;
    max-width: 800px;
    margin: 0 auto;
    padding: 0 18px; 
}

.text--pink{
    color: #ff69b4;
}

.container{
    padding: 50px 0;
}

section:nth-child(even){
    background-color: #f8f8f8;
}
.section__title{
    margin-bottom: 20px;
}


/* Navagation Bar */

nav {
    height: 100px;
    width: 100%;
    max-width: 1000px;
    margin: 0 auto;
    display: flex;
    justify-content: space-between;
    align-items: center;
    padding: 0 12px;
}

.nav__link--list{
    display: flex;
}

.nav__link--anchor{
    margin: 0 12px;
    color: #242424;
    text-decoration: none;
    font-weight: 700;
}

.nav__link--anchor-primary{
    background-color: #ff69b4;
    padding: 8px 20px;
    border-radius: 50px;
    color:white;
    transition: all 300ms ease;
}

.nav__link--anchor-primary:hover{
    background-color: pink;
}

.personal__logo{
    font-size: 24px;
    color: #ff69b4;
    margin: 0 12px;
    font-weight: bold;
}

/* About Me */

#about-me{
    min-height: 100vh;
    display: flex;
    flex-direction: column;
}
.about-me__info{
    display: flex;
    flex-direction: column;
}


.about-me__info--container{
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    max-width: 600px;
    margin: 0 auto;
    text-align: center;
}

.about-me__picture--mask{
    width: 100px;
    height: 100px;
    border-radius: 50%;
    overflow: hidden;
    box-shadow: 0 8px 16px rgba(0, 0, 0, 0.80);
    margin-bottom: 28px;
    animation: animate-profile-picture 800ms 200ms backwards;
}

@keyframes animate-profile-picture {
    0%{
        transform: scale(0);
    }
    80%{
        transform: scale(1.1);
    }
    100%{
        transform:scale(1)
    }

}

.about-me__picture{
    width: 100%;
    /*improving my picture*/
    transform: scale(1);
}
.about-me__links{
    margin-top: 16px;
}
.about-me__link{
    font-size: 20px;
    color: #ff69b4;
    text-decoration: none;
    padding: 0 16px;
    animation: fade-up 650ms 400ms backwards;
}

.about-me__link:hover{
    color: pink;
    transition: all 400ms;
}


.about-me__info--title{
    margin-bottom: 16px;
    animation: fade-up 650ms 400ms backwards;
}

@keyframes fade-up {
    0%{
        opacity:0;
        transform: translateY(40px);
    }
    100%{
        opacity: 1;
        transform: translateY(0)
    }
}

.about-me__info--para{
    font-size: 20px;
    margin-bottom: 28px;
    animation: fade-up 650ms 400ms backwards;
}


.about-me__img{
    height: 450px;
    width: 100%
}

.about-me__img--container{
    flex: 1;
    display: flex;
    align-items: center;
}

/* Tech Stack */

.language{
    width:25%;
    display: flex;
    justify-content: center;
    position: relative;
}

.language__img{
    width: 100%;
    max-width: 100px;
    transition: all 300ms;
}

.language:hover .language__img{
    filter: brightness(80%);
    opacity: 0.86;
    transform: scale(0.9);
}

.language__img--wrapper{
    display: flex;
    align-items: center;
    justify-content: center;
    padding: 25px 16px;
}

.language__list{
    display: flex;
    justify-content: center;
    width: 100%;
    flex-wrap: wrap;
}

.language__name{
    position: absolute;
    bottom: 0;
    transform: scale(0);
    transition: all 300ms;
    font-size: 20px;
}

.language:hover .language__name{
    transform: scale(1);
}

/*Projects*/

.project{
    margin-bottom: 135px;
}

.project:last-child{
    margin-bottom:60px;
}

.project__img{
    width:100%;
    transition: all 500ms ease;
}

.project__wrapper{
    display: flex;
    box-shadow: 0 20px 80px #ffc0cb;
    border-radius: 20px;
    overflow: hidden;
    position: relative;
    
}

.project__wrapper:before{
    content: "";
    position: absolute;
    top: 0;
    left: 0;
    height: 100%;
    width: 100%;
    background-color: #ffc0cb;
    opacity: 0;
    transition: opacity 450ms ease;
    z-index: 2;
}

.project:hover .project__wrapper:before{
    opacity: 0.5;
}

.project:hover .project__img{
    transform:scale(1.08);
    filter: blur(4px);
}

.project:hover .project__description{
    opacity: 1;
    transform: translateY(-50%);
}

.project__list{
    padding-top: 40px;
}

.project__description{
    position: absolute;
    top: 50%;
    left: 90px;
    transform: translateY(100%);
    max-width: 550px;
    z-index: 3;
    opacity: 0;
    transition: transform 450ms, opacity 300ms;
}

.project__description--title{
    font-size: 30px;
}

.project__description--para{
    margin: 16px 0;
}

.project__description--link{
    font-size: 20px;
    margin-right: 16px;
    text-decoration: none;
}

.project__description--title, 
.project__description--sub-title,
.project__description--para,
.project__description--link{
    text-align: left;
    color:#36454f
}

/*Footer*/

footer{
    background-color: #f8f8f8;
    padding: 50px;
}

.footer__logo{
    display: flex;
    flex-direction: row;
}

.footer__row{
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;
}

.footer__anchor{
    position: relative;
    flex-direction: row;
}

.footer__social--list{
    width: 100%;
    max-width: 500px;
    display: flex;
    flex-direction: row;
    justify-content: center;
    margin-bottom: 50px;
    justify-content: space-between;

}

.footer_copyright{
    display: flex;
    justify-content: center;
    color: black;
}


.footer__logo--img{
    width: 150px;
    height: 150px;
}

.footer__logo--popper{
    position: absolute;
    right: 0;
    color:#ff69b4;
    top: 30px;
    font-weight: 700;
    opacity: 0;
    transition: all 300ms ease;
}

.footer__anchor:hover .footer__logo--popper{
    transform: translateX(60px);
    opacity: 1; 
}

.footer__social--link,
.footer__logo--popper{
    color: #ff69b4;
}

/* small phones, tablets, large smartphones*/

@media (max-width: 768px){
    nav{
        height: 68px;
    }

    h1{
        font-size: 28px;
    }

    .about-me__info--para{
        font-size: 18px;
    }

    .language{
        width: calc(100% / 3);
    }

    .project__description--para{
        font-size: 14px;
    }

    .project__description{
        left: 30px;
        padding-right: 30px;
    }
}

/* small phones */
@media (max-width:480px){
    .nav__link:not(:last-child){
        display: none;
    }

    .project__description{
        padding: 0;
        left: 0;
        width: 100%;
    }

    .project__description--para{
        display: none;
    }

    .project__description--links{
        display: flex;
        justify-content: center;
    }

    .project__description--title{
        line-height: 1;
        font-size: 32px;
        text-align: center;
    }

    .project__description--sub-title{
        text-align: center;
        margin: 12px 0;
    }
}
